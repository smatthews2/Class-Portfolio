/* To download openGL on your VM, run:
    $ sudo apt update
    $ sudo apt install libglu1-mesa-dev freeglut3-dev mesa-common-dev
   After install, you may need to restart your VM.

   Also see  codebind.com/linux-tutorials/install-opengl-ubuntu-linux/
   Installing openGL on other operating systems may differ! These instructions should work just fine on the VM.
*/

// ******COMPILE WITH:  g++ openGLdemo1.cpp -lglut -lGLU -lGL

// ***AS SOON AS YOU CAN COMPILE AND RUN THIS AND YOU SEE A BLACK WINDOW WITH "Hello world!" POP UP, YOU ARE GOOD TO GO!!!***

#include <GL/glut.h>   
using namespace std;

// This function determines what will actually be displayed on the window display
void myDisplay(void){
    glClear(GL_COLOR_BUFFER_BIT);  
    glFlush();   // flush the buffer so output is rendered on screen right away
}

int main(int argc, char* argv[]){

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(400, 400);   // **experiment with different window sizes by changing these arguments
    glutInitWindowPosition(600, 300);   // **experiment with different window locations by changing these arguments
    glutCreateWindow("Hello world!");   // **try  putting different text in your window display
    glutDisplayFunc(myDisplay);
    glutMainLoop(); // keep the display running
    
    return 0;
}