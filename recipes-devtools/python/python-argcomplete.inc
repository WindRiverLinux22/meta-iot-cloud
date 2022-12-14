DESCRIPTION = "Bash tab completion for argparse"
AUTHOR = "Andrey Kislyuk"
HOMEPAGE = "https://github.com/kislyuk/argcomplete"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.rst;md5=2ee41112a44fe7014dce33e26468ba93"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-misc \
    ${PYTHON_PN}-shell \
"

PR = "r0"

SRC_URI[md5sum] = "9bb3b61a849f84723e63051240f74014"
SRC_URI[sha256sum] = "06c8a54ffaa6bfc9006314498742ec8843601206a3b94212f82657673662ecf1"