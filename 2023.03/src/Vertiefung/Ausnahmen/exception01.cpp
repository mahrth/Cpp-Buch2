class exception
{
public:
	exception() throw();
	exception(const exception&) throw();
	exception& operator=(const exception&) throw();
	virtual ~exception() throw();
	virtual const char* what() const throw(); 
};
