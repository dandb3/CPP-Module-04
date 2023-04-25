#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
private:
	std::string ideas_[100];

public:
	Brain(void);
	Brain(const Brain& brain);
	~Brain(void);

	Brain& operator=(const Brain& brain);
	const std::string* getIdeas(void) const;

};

#endif
