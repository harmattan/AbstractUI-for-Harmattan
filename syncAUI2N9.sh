# This script syncs abstractui files from the localhost to the QEMU Harmattan Emulator
# and then sets owners and rights
# Note: It syncs the entire org directory structure.
# Make this script executable with chmod 755 syncAUI2N9.sh
# call it with ./syncAUI2N9.sh
rsync -avz -e "ssh -i $HOME/.ssh/n9_rsa" org developer@192.168.2.15:/home/developer/tempimports/ --exclude .DS_Store \
&& \
ssh developer@192.168.2.15 "cd /usr/lib/qt4/imports/ && \chown -R root:root org && \
cd org/flyingsheep/abstractui && \
chmod 755 *.so && \
chmod 644 *.qml && \
chmod 644 qmldir && \
ls -ahl && \
exit \
; bash"