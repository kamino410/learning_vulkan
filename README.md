# learnign_vulkan

This repository contains memo and sample code while learning Vulkan.

## Install Vulkan SDK

Vulkanを使うためにはVulkan SDKをインストールしておく必要がある。

Download site : https://vulkan.lunarg.com/

### Ubuntu

aptを介してinstallする方法が記載されているのでそれに従えば良い。

### macOS

```bash
export VULKAN_SDK=/path_to_sdk/macOS
export PATH=$VULKAN_SDK/bin:$PATH
export DYLD_LIBRARY_PATH=$VULKAN_SDK/lib:$DYLD_LIBRARY_PATH
export VK_ICD_FILENAMES=$VULKAN_SDK/etc/vulkan/icd.d/MoltenVK_icd.json
```

