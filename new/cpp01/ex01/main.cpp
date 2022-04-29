
#include "Zombie.hpp"

int main(void) {
    Zombie  *zombie;
    Zombie	*test;
    int 	counter;

    counter = 2;
    zombie = zombieHorde(counter, "weirdo");
    test = zombieHorde(counter, "testing");
    for (int i = 0; i < counter; i++)
    {
        zombie[i].announce();
		test[i].announce();
    }
    delete[] zombie;
    delete[] test;
    // Zombie *test;
    // std::string names[] = {
    //     "Mario"
    //     "Carlo"
    //     "Luigi"
    //     "Julio"
    //     "Pablo"
    // };
    // for (int i = 0; i < 8; i++){
    //     std::srand(std::time(NULL));
    //     test[i].setName(names[std::rand() % 5]);
    // }
    // for (int i = 0; i < 8; i++){
    //     test->announce();
    // }
    // test = zombieHorde(8, "Jill");
    // test->announce();
	return 0;
}

// int		main(int ac, char **av)
// {
// 	test();
// 	std::cout << std::endl;
// 	std::string	s = av[0];
// 	s = "leaks " + s.erase(0,2);
// 	if (ac > 1 && !strcmp(av[1],"leaks"))
// 		system(s.c_str());
// 	else
// 	{
// 		s += " >> leaks.txt";
// 		system(s.c_str());
// 		system("grep \"total leaked bytes\" leaks.txt");
// 		system("rm leaks.txt");
// 	}
// 	return (0);
// }
