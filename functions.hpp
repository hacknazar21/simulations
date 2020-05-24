Start::Start() // Выполненяется один раз при запуске
{
	system("The Wing's Matrix Project");
    system("color 0A");
	system("cls");
    std::cout << "Press Enter to start: " << '\n';
    if (_getch() == 13) IsUserPressEnter = true;
	while(IsUserPressEnter) 
	{
		Update();
	}
}
void Start::Update() // Обновляется каждый фрейм (1 мс)
{
	srand(time(NULL));
	Sleep(1);
	for(int i=0; i < 48; i++)
	{
	     std::cout << " " << rand()%2;
	     std::cout << "  ";
	}
	std::cout << std::endl;
	
}
Start::~Start() // Выполняется один раз при завершении
{
	std::cout << "Hello!";
}