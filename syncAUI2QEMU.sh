# This script syncs abstractui files from the localhost to the QEMU Harmattan Emulator
# and then sets owners and rights
# Note: It syncs the entire org directory structure.
# Make this script executable with chmod 755 syncAUI2QEMU.sh
# call it with ./syncAUI2QEMU.sh
rsync -avz -e "ssh -p 6666" org root@localhost:/usr/lib/qt4/imports/ --exclude .DS_Store \
&& \
ssh -p 6666 root@localhost "cd /usr/lib/qt4/imports/ && \chown -R root:root org && \
cd org/flyingsheep/abstractui && \
chmod 755 *.so && \
chmod 644 *.qml && \
chmod 644 qmldir && \
ls -ahl && \
exit \
; bash"