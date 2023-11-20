build: ; clang++ src/main.cpp -o hack
clean: ; rm -rf hack
perm: ; chmod a+x hack
install: ; mv hack /usr/local/bin
uninstall: ; rm -rf /usr/local/bin/hack