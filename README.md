# ImGui Login

This is a simple login window using Dear ImGui and the Walnut Template(Walnut is a simple application framework built with Dear ImGui and designed to be used with Vulkan).
Enjoy using it as a base for something.

----

![login](https://user-images.githubusercontent.com/113075816/229367354-2b5bc990-2005-4c06-bac1-54a1c0a10ede.png)

----

## Getting Started
Once you've cloned, you can customize the `premake5.lua` and `WalnutApp/premake5.lua` files to your liking (eg. change the name from "WalnutApp" to something else).  Once you're happy, run `scripts/Setup.bat` to generate Visual Studio 2022 solution/project files. Your app is located in the `WalnutApp/` directory, which some basic example code to get you going in `WalnutApp/src/WalnutApp.cpp`. I recommend modifying that WalnutApp project to create your own application, as everything should be setup and ready to go.

## Requirements
- [Visual Studio 2022](https://visualstudio.com)
- [Vulkan SDK](https://vulkan.lunarg.com/sdk/home#windows) (preferably a recent version)

### 3rd party libaries(All included)
- [Dear ImGui](https://github.com/ocornut/imgui)
- [GLFW](https://github.com/glfw/glfw)
- [stb_image](https://github.com/nothings/stb)
- [GLM](https://github.com/g-truc/glm)

