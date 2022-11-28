.POSIX:

PREFIX = /usr/local
CFLAGS = -Ofast
LDLIBS = -lX11

BIN = dwmblocks

$(BIN): main.o
	$(CC) $^ -o $@ $(LDLIBS)

clean:
	$(RM) *.o $(BIN)

install: $(BIN)
	cp -f bin/* $(DESTDIR)$(PREFIX)/bin
	chmod 755 $(DESTDIR)$(PREFIX)/bin/sb-*
	install -D -m 755 $(BIN) $(DESTDIR)$(PREFIX)/bin/$(BIN)

uninstall:
	$(RM) $(DESTDIR)$(PREFIX)/bin/$(BIN)
	$(RM) $(DESTDIR)$(PREFIX)/bin/sb-*

.PHONY: clean install uninstall
