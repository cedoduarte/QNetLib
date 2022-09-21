#ifndef QNETREQUEST_H
#define QNETREQUEST_H

#include <QNetworkRequest>

class QNetRequest : public QNetworkRequest
{
public:
    enum HeaderMimeType
    {
        /// Description: Archivo de audio AAC
        /// Content-Type: audio/aac
        /// Extension: .aac
        AudioAac,

        /// Description: Documento AbiWord
        /// Content-Type: application/x-abiword
        /// Extension: .abw
        ApplicationXAbiWord,

        /// Description: Documento de Archivo (múltiples archivos incrustados)
        /// Content-Type: application/octet-stream
        /// Extension: .arc
        /// ------------------------------------------------------------------
        /// Description: Cualquier tipo de datos binarios
        /// Content-Type: application/octet-stream
        /// Extension: .bin
        ApplicationOctetStream,

        /// Description: AVI: Audio Video Intercalado
        /// Content-Type: video/x-msvideo
        /// Extension: .avi
        VideoXMSVideo,

        /// Description: Formato eBook Amazon Kindle
        /// Content-Type: application/vnd.amazon.ebook
        /// Extension: .azw
        ApplicationVncAmazonEbook,

        /// Description: Archivo BZip
        /// Content-Type: application/x-bzip
        /// Extension: .bz
        ApplicationXBzip,

        /// Description: Archivo BZip2
        /// Content-Type: application/x-bzip2
        /// Extension: .bz2
        ApplicationXBzip2,

        /// Description: Script C-Shell
        /// Content-Type: application/x-csh
        /// Extension: .csh
        ApplicationXCsh,

        /// Description: Hojas de estilo (CSS)
        /// Content-Type: text/css
        /// Extension: .css
        TextCss,

        /// Description: Valores separados por coma (CSV)
        /// Content-Type: text/csv
        /// Extension: .csv
        TextCsv,

        /// Description: Microsoft Word
        /// Content-Type: application/msword
        /// Extension: .doc
        ApplicationMSWord,

        /// Description: Publicación Electrónica (EPUB)
        /// Content-Type: application/epub+zip
        /// Extension: .epub
        ApplicationEPubZip,

        /// Description: Graphics Interchange Format (GIF)
        /// Content-Type: image/gif
        /// Extension: .gif
        ImageGif,

        /// Description: Hipertexto (HTML)
        /// Content-Type: text/html
        /// Extension: .htm, .html
        TextHtml,

        /// Description: Formato Icon
        /// Content-Type: image/x-icon
        /// Extension: .ico
        ImageXIcon,

        /// Description: Formato iCalendar
        /// Content-Type: text/calendar
        /// Extension: .ics
        TextCalendar,

        /// Description: Archivo Java (JAR)
        /// Content-Type: application/java-archive
        /// Extension: .jar
        ApplicationJavaArchive,

        /// Description: Imágenes JPEG
        /// Content-Type: image/jpeg
        /// Extension: .jpeg, .jpg
        ImageJpeg,

        /// Description: JavaScript (ECMAScript)
        /// Content-Type: application/javascript
        /// Extension: .js
        ApplicationJavaScript,

        /// Description: Formato JSON
        /// Content-Type: application/json
        /// Body example: {"name":"john","surname":"doe"}
        /// Extension: .json
        ApplicationJson,

        /// Description: Interfaz Digital de Instrumentos Musicales (MIDI)
        /// Content-Type: audio/midi
        /// Extension: .mid, .midi
        AudioMidi,

        /// Description: Video MPEG
        /// Content-Type: video/mpeg
        /// Extension: .mpeg
        VideoMpeg,

        /// Description: Paquete de instalación de Apple
        /// Content-Type: application/vnd.apple.installer+xml
        /// Extension: .mpkg
        ApplicationVndAppleInstallerXml,

        /// Description: Documento de presentación de OpenDocument
        /// Content-Type: application/vnd.oasis.opendocument.presentation
        /// Extension: .odp
        ApplicationVndOasisOpenDocumentPresentation,

        /// Description: Hoja de Cálculo OpenDocument
        /// Content-Type: application/vnd.oasis.opendocument.spreadsheet
        /// Extension: .ods
        ApplicationVndOasisOpenDocumentSpeadSheet,

        /// Description: Documento de texto OpenDocument
        /// Content-Type: application/vnd.oasis.opendocument.text
        /// Extension: .odt
        ApplicationVndOasisOpenDocumentText,

        /// Description: Audio OGG
        /// Content-Type: audio/ogg
        /// Extension: .oga
        AudioOgg,

        /// Description: Video OGG
        /// Content-Type: video/ogg
        /// Extension: .ogv
        VideoOgg,

        /// Description: OGG
        /// Content-Type: application/ogg
        /// Extension: .ogx
        ApplicationOgg,

        /// Description: Adobe Portable Document Format (PDF)
        /// Content-Type: application/pdf
        /// Extension: .pdf
        ApplicationPdf,

        /// Description: Microsoft PowerPoint
        /// Content-Type: application/vnd.ms-powerpoint
        /// Extension: .ppt
        ApplicationVndMsPowerPoint,

        /// Description: Archivo RAR
        /// Content-Type: application/x-rar-compressed
        /// Extension: .rar
        ApplicationXRarCompressed,

        /// Description: Formato de Texto Enriquecido (RTF)
        /// Content-Type: application/rtf
        /// Extension: .rtf
        ApplicationRtf,

        /// Description: Script Bourne shell
        /// Content-Type: application/x-sh
        /// Extension: .sh
        ApplicationXSh,

        /// Description: Gráficos Vectoriales (SVG)
        /// Content-Type: image/svg+xml
        /// Extension: .svg
        ImageSvgXml,

        /// Description: Small web format (SWF) o Documento Adobe Flash
        /// Content-Type: application/x-shockwave-flash
        /// Extension: .swf
        ApplicationXShockwaveFlash,

        /// Description: Aerchivo Tape (TAR)
        /// Content-Type: application/x-tar
        /// Extension: .tar
        ApplicationXTar,

        /// Description: Formato de archivo de imagen etiquetado (TIFF)
        /// Content-Type: image/tiff
        /// Extension: .tif, .tiff
        ImageTiff,

        /// Description: Fuente TrueType
        /// Content-Type: font/ttf
        /// Extension: .ttf
        FontTtf,

        /// Description: Microsft Visio
        /// Content-Type: application/vnd.visio
        /// Extension: .vsd
        ApplicationVndVisio,

        /// Description: Formato de audio de forma de onda (WAV)
        /// Content-Type: audio/x-wav
        /// Extension: .wav
        AudioXWav,

        /// Description: Audio WEBM
        /// Content-Type: audio/webm
        /// Extension: .weba
        AudioWebm,

        /// Description: Video WEBM
        /// Content-Type: video/webm
        /// Extension: .webm
        VideoWebm,

        /// Description: Imágenes WEBP
        /// Content-Type: image/webp
        /// Extension: .webp
        ImageWebp,

        /// Description: Formato de fuente abierta web (WOFF)
        /// Content-Type: font/woff
        /// Extension: .woff
        FontWoff,

        /// Description: Formato de fuente abierta web 2 (WOFF 2)
        /// Content-Type: font/woff2
        /// Extension: .woff2
        FontWoff2,

        /// Description: XHTML
        /// Content-Type: application/xhtml+xml
        /// Extension: .xhtml
        ApplicationXhtmlXml,

        /// Description: Microsoft Excel
        /// Content-Type: application/vnd.ms-excel
        /// Extension: .xls
        ApplicationVndMsExcel,

        /// Description: XML
        /// Content-Type: application/xml
        /// Extension: .xml
        ApplicationXml,

        /// Description: XUL
        /// Content-Type: application/vnd.mozilla.xul+xml
        /// Extension: .xul
        ApplicationVndMozillaXulXml,

        /// Description: Archivo ZIP
        /// Content-Type: application/zip
        /// Extension: .zip
        ApplicationZip,

        /// Description: Contenedor de video 3GPP
        /// Content-Type: video/3gpp
        /// Extension: .3gp
        Video3gpp,

        /// Description: Contenedor de audio 3GPP
        /// Content-Type: audio/3gpp
        /// Extension: .3gp
        Audio3gpp,

        /// Description: Contenedor de video 3GPP2
        /// Content-Type: video/3gpp2
        /// Extension: .3g2
        Video3gpp2,

        /// Description: Contenedor de audio 3GPP2
        /// Content-Tyoe: audio/3gpp2
        /// Extension: .3g2
        Audio3gpp2,

        /// Description: 7-zip
        /// Content-Type: application/x-7z-compressed
        /// Extension: .7z
        ApplicationX7zCompressed,

        /// Content-Type: application/*+json
        ApplicationAsteriskPlusJson,

        /// Content-Type: text/json
        TextJson,

        /// Content-Type: application/x-www-form-urlencoded
        /// Body example: name=john&surname=doe
        ApplicationXwwwFormUrlEncoded,

        /// Description: Representa cualquier documento que contenga texto y es teóricamente legible por humanos
        /// Content-Type: text/plain
        TextPlain
    };

    QNetRequest();
    QNetRequest(const QUrl &url);
    virtual ~QNetRequest();
    void setContentTypeHeader(HeaderMimeType mimeType);
    HeaderMimeType contentTypeHeader() const;
    static QString contentType(HeaderMimeType mimeType);
    static void setDefaultContentType(HeaderMimeType mimeType);
    static QString sslLibraryBuildVersionString();
private:
    void sslConfig();

    HeaderMimeType m_mimeType;
    static HeaderMimeType s_defaultContentType;
};

#endif /// QNETREQUEST_H
