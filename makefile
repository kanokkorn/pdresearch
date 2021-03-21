cc = cc
ld = -lcurl
flags = -std=c89 -Wall -Wextra -Os -g -pedantic
project = client

$(project): main.c
	$(cc) $(flags) $(ld) $< -o $@

clean:
	rm $(project)

.SILENT: clean
