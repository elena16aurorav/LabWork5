class Counter{
	static Counter* Head;
	static unsigned int m_curCounters;//аналог m_size

	size_t m_nOwners;//m_count
	char* m_pStr;
	Counter* pNext;
public:

	Counter(const char* p);
	~Counter();
	void AddUser();
	void RemoveUser();

	friend class MyString;
};