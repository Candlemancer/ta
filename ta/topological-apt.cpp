#include <apt-pkg/cachefile.h>
#include <apt-pkg/pkgcache.h>

int main()
{
	pkgInitConfig(*_config);
	pkgInitSystem(*_config, _system);
	
	pkgCacheFile cache_file;
	pkgCache* cache = cache_file.GetPkgCache();

	for(pkgCache::PkgIterator package = cache->PkgBegin(); !package.end(); package++)
	{
		std::cout << package.Name() << std::endl;
	}
	return 0;
}
