# What's it?

A fork of rogue-clone from Debian's [bsdgames-nonfree](https://packages.debian.org/bookworm/bsdgames-nonfree) package with bug fixes and enhancements. 

![](doc/rogue.png)

Most Linux distributions, such as Debian and Ubuntu, come with a text-based dungeon crawling game called "Rogue", which is an open-source reimplementation of the original Rogue game.

This fork starts from the source code of this Rogue implementation with several improvements.

## Changes

- Refactor save/load routines to prevent memory corruption.
- Added support for Windows.
- Removed inode-ID and timestamp verification for save files, allowing some flexibility with backup and restore operations.
- New wizard type which can be enabled by CTRL+w then input "VAX".
- New wizard command: CTRL+G to restore HP and stamina.
- Score file now stores all runs for all users, instead of just the top run for every user.
- New `-u` argument can check the save file and decide open a new game or load the previous save file if exists.

## Must know

- Find the stairs and go down to the next level, locate the Amulet of Yendor, and bring it back safely.
- Use `?` command to view the list of available commands.
- When there is no way to go, use `s` command to search for nearby hidden passages. There are many secret doors and paths to discover.

## How to play?

- English: "[A guide to the dungeons of doom](doc/a-guide-to-the-dungeons-of-doom)".
- Chinese: 《[中文手册](doc/RogueChinese.md)》

## Download

For prebuild binaries, check the [release page](releases).

## Build

requirements:

- libncurses for Linux
- pdcurses for Windows.

build:

