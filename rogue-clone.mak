mode: exe
win32/out: rogue-clone.exe
linux/out: rogue-clone
int: objs/$(target)-$(profile)
win32/define: PDC_WIDE=1, PDC_FORCE_UTF8=1
flnk: -static
flag@debug: -static, -g, -Og
flag@release: -static, -Os
flnk@release: -s

link: pdcurses_wincon

src: rogue/hit.c
src: rogue/init.c
src: rogue/inventory.c
src: rogue/level.c
src: rogue/machdep.c
src: rogue/main.c
src: rogue/message.c
src: rogue/monster.c
src: rogue/move.c
src: rogue/object.c
src: rogue/pack.c
src: rogue/play.c
src: rogue/random.c
src: rogue/ring.c
src: rogue/room.c
src: rogue/save.c
src: rogue/score.c
src: rogue/spec_hit.c
src: rogue/throw.c
src: rogue/trap.c
src: rogue/use.c
src: rogue/zap.c


