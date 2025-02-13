# GGPOUE5

A port of [GGPO](http://ggpo.net) to an Unreal Engine 5 plugin.

## Setup & Usage

Add to the Plugins folder of your Unreal project.

See [doc/README.md](doc/README.md), [doc/DeveloperGuide.md](doc/DeveloperGuide.md), and the [GGPO GitHub](https://github.com/pond3r/ggpo) for more information.

### Sample Application

[VectorWar UE5](https://github.com/ShinraCorpMixer/VectorWarUE5) is a port of the GGPO sample game VectorWar, using GGPOUE5 for netcode.

### Issues

Currently only usable with Windows, as the GGPO source and network layer depend on Win32 APIs. May be able to reuse some UE5 functionality for the underlying connection? Will look into investigating to see if it's possible on other platforms (Mac, Linux, Playstation, Switch, etc...) 

## Licensing

GGPO is available under The MIT License. This means GGPO is free for commercial and non-commercial use. Attribution is not required, but appreciated. 
