#include<Windows.h>
#include <stdio.h>

#include "GL/freeglut.h"

int main(int argc, char** argv)
{	
	glutInit(&argc, argv);
	
	//��ʾģʽ��ʼ��
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

	//���崰�ڴ�С
	glutInitWindowSize(300, 300);

	//���崰��λ��
	glutInitWindowPosition(100, 100);

	//��������
	glutCreateWindow("OpenGL Version");

	const GLubyte* name = glGetString(GL_VENDOR);

	const GLubyte* biaoshifu = glGetString(GL_RENDERER);

	const GLubyte* OpenGLVersion = glGetString(GL_VERSION);

	const GLubyte* gluVersion = gluGetString(GLU_VERSION);

	printf("OpenGLʵ�ֳ��̵����֣�%s\n", name);

	printf("��Ⱦ����ʶ����%s\n", biaoshifu);

	printf("OpenGLʵ�ֵİ汾�ţ�%s\n", OpenGLVersion);

	printf("GLU���߿�汾��%s\n", gluVersion);

	return 0;
}