#
# Copyright (C) 2012 Digi International.
#
SUMMARY = "Network applications packagegroup for DEY image"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COREBASE}/LICENSE;md5=3f40d7994397109285ec7b81fdeb3b58"
PACKAGE_ARCH = "${MACHINE_ARCH}"

inherit packagegroup

# Distro can override the following VIRTUAL-RUNTIME providers:
VIRTUAL-RUNTIME_ftp-server ?= "vsftpd"

VIRTUAL-RUNTIME_http-server ?= "busybox-httpd"
#VIRTUAL-RUNTIME_http-server ?= "cherokee"

# Choose between ethtool or mii-tool
VIRTUAL-RUNTIME_network-utils ?= "ethtool"
#VIRTUAL-RUNTIME_network-utils ?= "net-tools"

VIRTUAL-RUNTIME_snmp-manager ?= ""
#VIRTUAL-RUNTIME_snmp-manager ?= "net-snmp-server"

VIRTUAL-RUNTIME_ntp-client ?= "busybox-ntpd"

CELLULAR_PKGS = "\
    modemmanager \
    ppp \
"

RDEPENDS_${PN} = "\
	iproute2 \
	${@base_contains('DISTRO_FEATURES', 'cellular', '${CELLULAR_PKGS}', '', d)} \
	${VIRTUAL-RUNTIME_ftp-server} \
	${VIRTUAL-RUNTIME_http-server} \
	${VIRTUAL-RUNTIME_network-utils} \
	${VIRTUAL-RUNTIME_snmp-manager} \
	${VIRTUAL-RUNTIME_ntp-client} \
"
