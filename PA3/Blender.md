# Blender - Install Spike
## Links:
### Installation Docs
- [Setup Guide](https://developer.blender.org/docs/handbook/building_blender/windows/)
- [Visual Studio Guide](https://developer.blender.org/docs/handbook/development_environments/visual_studio/)
### Respository Links
- [My Fork](https://projects.blender.org/blender/blender)
- [Upstream](https://github.com/godotengine/godot)
### Summary:
This was easier than I expected, but definitely challenged my skills a little bit. I found the setup guide helpful but had to Google a few things due to knowledge gaps on my part. The biggest issue that I ran into was that the setup guide said that I needed Visual Studio installed, and I already had it, so I just skipped that part. Then I got to the part where you download the Blender libraries and it was saying that it couldn't find Visual Studio. This took a few Google searches to figure out, but I ended up realizing it was because I had Visual Studio, but not the C++ Development part. Once I went into Visual Studio and downloaded that, it was fine and everything worked smoothly after that. The Blender build takes around 30-40 minutes to complete, but I was able to successfully access the source code and build a working version of Blender. 