#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(const Ice& ice);
	~Ice(void);

	Ice& operator=(const Ice& ice);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

};

#endif
