CFLAGS		:= -Wall -Wextra
SRCS		:= $(wildcard *.c)
BINS		:= $(SRCS:.c=)

volume: LDLIBS += -lpulse

.PHONY: all clean install
all: $(BINS)

%: %.c
	$(CC) -o $@ $< $(CFLAGS) $(LDLIBS)

clean:
	rm -f $(BINS)
