# Ray Tracer – Ray Tracing in One Weekend Implementation

This project is a personal implementation of the concepts found in Peter Shirley's acclaimed book, **"Ray Tracing in One Weekend"**. The goal was to build a basic ray tracer from scratch to understand the fundamentals of computer graphics, light-material interactions, and path tracing.

## Project Goals

* Implement the core ray tracing algorithm.
* Understand ray-sphere intersection logic.
* Experiment with different materials (Lambertian, Metal, and Dielectrics).
* Generate high-quality renders using anti-aliasing and depth of field.

## Getting Started

### Viewing the Results

The renderer outputs images in the **PPM (Portable Pixmap)** format.

* To view the final result, open `image.ppm` with any image viewer or editor that supports the PPM format (e.g., GIMP, Photoshop, or online PPM viewers).

### Running the Renderer

You are encouraged to experiment with the scene. You can modify the objects in the `main` file and then pipe the program's output to a `.ppm` file:

```bash
# Compile the project and run:
./your_executable_name > image.ppm

```

## Credits & Resources

This project follows the curriculum of:

* [Ray Tracing in One Weekend](https://raytracing.github.io/books/RayTracingInOneWeekend.html) by Peter Shirley.
