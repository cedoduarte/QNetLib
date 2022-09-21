#include "qnetrequest.h"

#include <QSslSocket>
#include <QSslConfiguration>

QNetRequest::HeaderMimeType QNetRequest::s_defaultContentType = QNetRequest::ApplicationJson;

void QNetRequest::setDefaultContentType(HeaderMimeType mimeType)
{
    s_defaultContentType = mimeType;
}

QNetRequest::QNetRequest()
{
    sslConfig();
    setContentTypeHeader(s_defaultContentType);
}

QNetRequest::QNetRequest(const QUrl &url)
{
    sslConfig();
    setContentTypeHeader(s_defaultContentType);
    setUrl(url);
}

QNetRequest::~QNetRequest()
{
    // nothing to do here
}

void QNetRequest::sslConfig()
{
    QSslConfiguration sslConfig = sslConfiguration();
    sslConfig.setPeerVerifyMode(QSslSocket::VerifyNone);
    setSslConfiguration(sslConfig);
}

void QNetRequest::setContentTypeHeader(QNetRequest::HeaderMimeType mimeType)
{
    setHeader(QNetworkRequest::ContentTypeHeader, contentType(mimeType));
}

QNetRequest::HeaderMimeType QNetRequest::contentTypeHeader() const
{
    return m_mimeType;
}

QString QNetRequest::sslLibraryBuildVersionString()
{
    return QSslSocket::sslLibraryBuildVersionString();
}

QString QNetRequest::contentType(QNetRequest::HeaderMimeType mimeType)
{
    switch (mimeType)
    {
        case AudioAac: return "audio/aac";
        case ApplicationXAbiWord: return "application/x-abiword";
        case ApplicationOctetStream: return "application/octet-stream";
        case VideoXMSVideo: return "video/x-msvideo";
        case ApplicationVncAmazonEbook: return "application/vnd.amazon.ebook";
        case ApplicationXBzip: return "application/x-bzip";
        case ApplicationXBzip2: return "application/x-bzip2";
        case ApplicationXCsh: return "application/x-csh";
        case TextCss: return "text/css";
        case TextCsv: return "text/csv";
        case ApplicationMSWord: return "application/msword";
        case ApplicationEPubZip: return "application/epub+zip";
        case ImageGif: return "image/gif";
        case TextHtml: return "text/html";
        case ImageXIcon: return "image/x-icon";
        case TextCalendar: return "text/calendar";
        case ApplicationJavaArchive: return "application/java-archive";
        case ImageJpeg: return "image/jpeg";
        case ApplicationJavaScript: return "application/javascript";
        case ApplicationJson: return "application/json";
        case AudioMidi: return "audio/midi";
        case VideoMpeg: return "video/mpeg";
        case ApplicationVndAppleInstallerXml: return "application/vnd.apple.installer+xml";
        case ApplicationVndOasisOpenDocumentPresentation: return "application/vnd.oasis.opendocument.presentation";
        case ApplicationVndOasisOpenDocumentSpeadSheet: return "application/vnd.oasis.opendocument.spreadsheet";
        case ApplicationVndOasisOpenDocumentText: return "application/vnd.oasis.opendocument.text";
        case AudioOgg: return "audio/ogg";
        case VideoOgg: return "video/ogg";
        case ApplicationOgg: return "application/ogg";
        case ApplicationPdf: return "application/pdf";
        case ApplicationVndMsPowerPoint: return "application/vnd.ms-powerpoint";
        case ApplicationXRarCompressed: return "application/x-rar-compressed";
        case ApplicationRtf: return "application/rtf";
        case ApplicationXSh: return "application/x-sh";
        case ImageSvgXml: return "image/svg+xml";
        case ApplicationXShockwaveFlash: return "application/x-shockwave-flash";
        case ApplicationXTar: return "application/x-tar";
        case ImageTiff: return "image/tiff";
        case FontTtf: return "font/ttf";
        case ApplicationVndVisio: return "application/vnd.visio";
        case AudioXWav: return "audio/x-wav";
        case AudioWebm: return "audio/webm";
        case VideoWebm: return "video/webm";
        case ImageWebp: return "image/webp";
        case FontWoff: return "font/woff";
        case FontWoff2: return "font/woff2";
        case ApplicationXhtmlXml: return "application/xhtml+xml";
        case ApplicationVndMsExcel: return "application/vnd.ms-excel";
        case ApplicationXml: return "application/xml";
        case ApplicationVndMozillaXulXml: return "application/vnd.mozilla.xul+xml";
        case ApplicationZip: return "application/zip";
        case Video3gpp: return "video/3gpp";
        case Audio3gpp: return "audio/3gpp";
        case Video3gpp2: return "video/3gpp2";
        case Audio3gpp2: return "audio/3gpp2";
        case ApplicationX7zCompressed: return "application/x-7z-compressed";
        case ApplicationAsteriskPlusJson: return "application/*+json";
        case TextJson: return "text/json";
        case ApplicationXwwwFormUrlEncoded: return "application/x-www-form-urlencoded";
        case TextPlain: return "text/plain";
    }
    return "";
}
