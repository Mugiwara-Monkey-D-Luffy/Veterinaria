#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
#include "VentanaPrincipal.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main() {




	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	avance1Proyecto3::VentanaPrincipal form;
	Application::Run(% form);
}