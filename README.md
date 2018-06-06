# meshcat-cpp : C++ bindings to the MeshCat WebGL viewer

[MeshCat](https://github.com/rdeits/meshcat) is a remotely-controllable 3D viewer, built on top of [three.js](https://threejs.org/). The viewer contains a tree of objects and transformations (i.e. a scene graph) and allows those objects and transformations to be added and manipulated with simple commands. This makes it easy to create 3D visualizations of geometries, mechanisms, and robots. 

meshcat-cpp is C++ library that implements the [ZMQ protocol](https://github.com/rdeits/meshcat-python#protocol) used in [meshcat-python](https://github.com/rdeits/meshcat-python) as bridge to the WebSocket protocol actually understood by MeshCat. At the moment, it requires the `meshcat-server` from [meshcat-python](https://github.com/rdeits/meshcat-python) to run to work. 
