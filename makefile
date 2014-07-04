WAYLAND=`pkg-config wayland-client --cflags --libs`
CFLAGS?=-std=c11 -Wall -Werror -O3 -fvisibility=hidden

hello_wayland: hello_wayland.o helpers.o helpers.h images.bin
	$(CC) -o hello_wayland *.o $(WAYLAND) -lrt

images.bin: images/convert.py images/window.png images/fish.png
	images/convert.py
	cat window.bin fish.bin > images.bin

clean:
	$(RM) *.o fish.bin window.bin hello_wayland
