cc = cc
ld = -lcurl
flags = -std=c89 -Wall -Wextra -Wconversion -Os -s -pedantic
project = client

$(project): main.c
	$(cc) $(flags) $< -o $@ $(ld)

clean:
	rm $(project)

.SILENT: clean
