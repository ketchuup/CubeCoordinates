# CubeCoordinates
Generator n-dimensional cube's coordinates..
Generator works only if 1 ≤ dimension ≤ 62.

If you want to get:
- *Integer coordinates (0 and 1)*, you should to push back **(current >> bit) & 1** and change vector type to **std::vector \<int\>**
- *Float coordinates (0.0f and 1.0f)*, you should to push back **static_cast <float> ((current >> bit) & 1)**
- *Float coordinates (-1.0f and 1.0f)*, you should to push back **(static_cast <float> ((current >> bit) & 1) - 0.5f) * 2.0f**
