cc = cc
ld = -lcurl
flags = -std=c99 -Wall -Wextra -Ofast -g
project = client

client:
	$(cc) $(project).c $(flags) $(ld) -o $(project)

clean:
	rm $(project)

.SILENT: clean
