# What's it?

A fork of rogue-clone from Debian's [bsdgames-nonfree](https://packages.debian.org/bookworm/bsdgames-nonfree) package with bug fixes and enhancements. 

![](doc/rogue.png)

Most Linux distributions, such as Debian and Ubuntu, come with a text-based adventure game called "Rogue", which is an open-source reimplementation of the original Rogue game.

This fork starts from the source code of this Rogue implementation with several improvements.

## Changes

- Added support for Windows.
- Fixed an issue with save file corruption that could lead to crashes when loading a corrupted save file.
- Removed inode-ID and timestamp verification for save files, allowing some flexibility with backup and restore operations.
- Introduced a new wizard mode; press "CTRL+W" and enter "VAX" to enable it.
- Added a new wizard command "CTRL+G" to restore stamina and HP (requires wizard mode).
- One user can now have multiple entries on the ranking list.

## How to play?

Read "[A guide to the dungeons of doom](doc/a-guide-to-the-dungeons-of-doom)".

## Build

requirements:

- libncurses for Linux
- pdcurses for Windows.

build:

