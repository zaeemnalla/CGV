/*  Header file for Polyhedron, which defines several polyhedra
    as IFS models.  Note that createPolyhedra() MUST be called
    before using any of the polyhedra.

    A polyhedron is a struct of type Polyhedron, with the following fields.  */

//  Data type for polyhedra.
typedef struct Polyhedron {

    // Number of vertices in the polyhedron.
    int vertexCount;
    // Number of faces in the polyhedron.
    int faceCount;
    // Longest vertex, treating the vertices as vectors.
    double maxVertexLength;

    // Array of vertex coordinates, 3 numbers per vertex; length = vertexCount*3
    double* vertices;

    /*  Array of face data.  For each face, it contains a list of vertex numbers
    vertices of that face, followed by a -1 to mark the end of the data
    for that face.  Length depends on how many vertices all the faces
    have.  Note that the location for the data for vertex number n is
    at index 3*n in the vertex array.  */
    int* faces;

    /*  Can be NULL.  Otherwise, an array of color data, with 3 numbers
    for each face giving the RGB for that face.  Length is 3*faceCount.
    Note that the data for face n is at index 3*n.  */
    double* faceColors;

    /*  Array of normal vectors for the faces, with 3 numbers per face.
    Note that the data for face n is at index 3*n.  */
    double* normals;

} Polyhedron;

//  CALL THIS BEFORE USING THE FOLLOWING VARIABLES!
void createPolyhedra();

//  The available polyhedral models.
Polyhedron house;
Polyhedron cube;
Polyhedron dodecahedron;
Polyhedron icosahedron;
Polyhedron octahedron;
Polyhedron rhombicDodecahedron;
Polyhedron socerBall;
Polyhedron stellatedDodecahedron;
Polyhedron stellatedIcosahedron;
Polyhedron stellatedOctahedron;
Polyhedron tetrahedron;
Polyhedron truncatedIcosahedron;
Polyhedron truncatedRhombicDodecahedron;
