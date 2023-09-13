# Stealth Game Prototype
Gameplay demonstration
<iframe width="560" height="315" src="https://www.youtube-nocookie.com/embed/ISlcRu0v5x4?si=ay2xoq5w4EV-Qjvy" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

Gameplay and code walkthrough
<iframe width="560" height="315" src="https://www.youtube-nocookie.com/embed/tmKM7y7t-L0" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

[Gameplay and code walkthrough](https://www.youtube.com/watch?v=tmKM7y7t-L0)

## Description/Reflection

### Main mechanic
The main mechanic in this game is the enemy system for a stealth game, where the enemies are standing idle but when the player gets close to them they start chasing the player, and the player dies (with a nice ragdoll) if the enemy touches them. If the player breaks line-of-sight with a chasing enemy then they wait for 5 seconds then return to their home/original position, still checking for the player. There are also blocks in the level which can be moved in front of the enemies to block their line of sight to the player.

### Development difficulties
The enemy "AI" was the hardest part - I initially tried to implement it as a behaviour tree and got that kinda working but when I tried to move the AI it moved super slowly. I've left my attempts as a branch in my git repo and I think I posted about it on the discord. I eventually moved to a hand-made state machine type thing in the enemy controller's main blueprint and that seems to work pretty well.

Also generally working with Unreal and finding places for things to go (controllers vs. level blueprints vs. game modes vs. game instances vs. etc) - I did an evening's worth of work on a bunch of things but when I went to open my project the next morning it kept crashing unless I rolled back several commits, which was pretty frustrating. (I think it was maybe because there was a mismatch between what my bluprints and my C++ thought was being loaded?)

### Most interesting
Again I think it's the enemy AI - I won't go super into depth cos I talk about it a bit in the video but it's a system that has to do a lot of things and so it connects with a bunch of engine systems and handles a lot of state/decisions.

### Reflection on Learning
The main thing I wanted to (and did) get out of this assignement was an understanding of how Unreal works and which bits of it you need to work with in order to make games. A lot of this is which systems are available (eg. traces & timers, which I used a bunch in my enemy AI) for developing gameplay features. Also how things like level blueprints and game modes and instances work, and which things you do with which. Another big thing was when to use blueprints vs. C++ - I started off with a C++ project (so C++ player controllers etc.) but I ended up subclassing those as blueprints cos it was easier to add variables or hook up events in blueprints rather than C++, so for my next thing I might try starting with blueprints but being super willing to make blueprint nodes in C++. (Also I had several moments where the editor would crash on startup and wouldn't go until I fixed my C++ and rebuilt it from my IDE, and that seems to happen way less with blueprints!)