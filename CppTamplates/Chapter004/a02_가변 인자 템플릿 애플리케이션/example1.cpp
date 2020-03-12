#include <memory>

namespace std
{
	template <typename T, typename... Args> shared_ptr <T>
		make_shared(Args &&... args);

	class thread
	{
	public:
		template<typename F,typename... Args>
		explicit thread(F&& f, Args&&... args);
	};
	template <typename T,typename Allocator = allocator<T>>
	class Vector
	{
	public:
		template <typename... Args> reference emplace_back(Args&&... args);
	};
}