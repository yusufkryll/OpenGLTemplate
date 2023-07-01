#include <GLFW/glfw3.h>
#include <iostream>

using namespace std;

int main(void)
{
	if (!glfwInit())
		return -1;

	GLFWwindow* window = glfwCreateWindow(800,600, "FirstProgram", NULL, NULL); // pencere burada oluşturulur.

	if (window == NULL) // window oluşturulamadığı durumlar olabilir bu durumlarda gli terminate etmek gerekir.
	{
		cout << "Window cannot instantiated.";
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window); //OpenGl ile yaptığımız işlemlerin hangi pencerede işleneceğini belirttiğimiz bir metod.

	while (!glfwWindowShouldClose(window)) // Pencere kapanmadığı durumlarda bu while döngüsü içinde bulunmamız gerekir.
	{
		glfwSwapBuffers(window); //OpenGl ile yapılan çizimlerin pencereye aktarılması.
		glfwPollEvents(); //Pencerede yapılan eventleri yakalamamızı sağlayan fonksiyon.
	}

	cout << "Program terminated." << endl; // Eğer pencere kapatılırsa çalıştırılır.

	return 0;
}