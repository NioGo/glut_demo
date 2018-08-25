#include <glut.h>

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0f, 0.3f, 1.0f);
	glRectf(-0.5f, -0.5f, 0.5f, 0.5f);  // 画矩形
	glPointSize(5.0f);
	glColor3f(1.0f, 0.0f, 0.0f);

	// 打点
	glBegin(GL_POINTS);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(-0.5f, -0.5f);
	glVertex2f(0.5f, -0.5f);
	glVertex2f(-0.5f, 0.5f);
	glVertex2f(0.5f, 0.5f);
	glEnd();

	// 画线
	glLineWidth(2.0f);
	glColor3f(0.0f, 1.0f, 1.0f);
	glBegin(GL_LINES);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(0.0f, 1.0f);
	glVertex2f(0.0f, 1.0f);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(0.0f, -1.0f);
	glVertex2f(0.0f, -1.0f);
	glVertex2f(1.0f, 0.0f);
	glEnd();

	glFlush();
}

int main(int argc, char *argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(300, 300);
	glutInitWindowSize(300, 300);
	glutCreateWindow("第一个OpenGL程序");
	glutDisplayFunc(&display);
	glutMainLoop();
	return 0;
}
