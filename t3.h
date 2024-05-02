#ifndef T3H
#define T3H

int load_edges ( char *fname ); //loads the edges from the CSV file of name fname
int load_vertices ( char *fname );  //loads the vertices from the CSV file of name fname // prints the shortest path between startNode and endNode, if there is any
void free_memory ( void ) ; // frees any memory that was used
void shortest_path(int startNode, int endNode);
#endif