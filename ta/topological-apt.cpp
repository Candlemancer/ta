#include <map>
#include <apt-pkg/cachefile.h>
#include <apt-pkg/pkgcache.h>

using namespace std;

int main()
{
	pkgInitConfig(*_config);
	pkgInitSystem(*_config, _system);
	
	pkgCacheFile cache_file;
	pkgCache* cache = cache_file.GetPkgCache();

	for(pkgCache::PkgIterator package = cache->PkgBegin(); !package.end(); package++)
	{
		//std::cout << package.Name() << std::endl;
		cout << package.Name() << endl;
	}
	return 0;
}
