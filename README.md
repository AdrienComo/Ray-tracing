# Ray Tracing

![Screenshot](data/render0_0.jpg) <br>
As shown above, an example image of the application.
We can distinguish the spheres with all their different colors and reflections on the spheres and surrounding walls.

### Ray-Tracing algorithm overview
----

Ray-Tracing works by simulating real light rays and using an algorithm to trace back the path that actual light would take in the real world.<br>

Ray tracing-based rendering's popularity stems from its basis in a realistic simulation of light transport, as compared to other rendering methods, such as rasterization. Although it requires a more powerful computer to run.<br>

### Further information
----

All the objects inside the scenes are mathematical models of basic shapes (plane, square, rectangle, sphere). More complex shapes are the union and/or intersection of basic shapes.
This algorithm is capable of simulating the reflection, refraction, transparency, and colors of all objects inside the scene depending on the position and ligthing conditions.

The quality is inversely proportionate to the speed of execution of the Ray-Tracing algorithm.


### Installation and execution
----

> Tested for Linux systems. <br>
Open in a CMakeList compatible IDE. <br>
Run the project. <br>
Inside the application, use the Qt sliders/buttons to choose between the different scenes available and different scene qualities. <br>
You can access the DepthMap of the scene with the Shading and Toggle View button. <br>

### Dependencies
----

Needs CMakeLists. <br>
This code uses Qt : https://www.qt.io/download

### Screenshots
----
![Screenshot](Capture_d_écran_du_2022-01-13_19-15-43.png) <br>
![Screenshot](data/img_1.jpg) <br>
![Screenshot](data/img_2.png) <br>
![Screenshot](data/img_3.png) <br>
