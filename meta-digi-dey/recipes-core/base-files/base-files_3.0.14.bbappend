# Copyright (C) 2013 Digi International.

FILESEXTRAPATHS_prepend := "${THISDIR}/${BPN}:"

SRC_URI += " \
    file://sysctl.conf \
"

SRC_URI_append_ccimx6 = " file://resize-ext4fs.sh"

do_install_append() {
	install -m 0644 ${WORKDIR}/sysctl.conf ${D}${sysconfdir}/
}

do_install_append_ccimx6() {
	install -d ${D}${sysconfdir}/${IMAGE_PKGTYPE}-postinsts
	install -m 0755 ${WORKDIR}/resize-ext4fs.sh ${D}${sysconfdir}/${IMAGE_PKGTYPE}-postinsts/
}
