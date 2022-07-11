#ifndef ENEMY_HPP
# define ENEMY_HPP

class	Enemy
{
public:
	Enemy();
	Enemy(const Enemy& ref);
	Enemy& operator=(const Enemy& ref);
	~Enemy();
};

#endif
