template<typename _CharT, typename _Traits = char_traits<_CharT> > class basic_ostream;
...
typedef basic_ostream<char> ostream;
...
__ostream_type& operator<<(int);
...
extern ostream cout;
extern ostream cerr;
extern ostream clog;
