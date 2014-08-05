#include <apt-pkg/cachefile.h>
#include <apt-pkg/pkgcache.h>

#include "Graph.h"

using namespace std;

int main()
{
    unordered_map<string, GraphNode<int>> packageGraph;
    /*packageGraph["hello"] = 23;
    cout << packageGraph["hello"] << endl;/**/

    //Commenting out code to list through all installed packages. I'm about to experiment with C++ Maps.
    /*pkgInitConfig(*_config);
    pkgInitSystem(*_config, _system);

    pkgCacheFile cache_file;
    pkgCache* cache = cache_file.GetPkgCache();

    for(pkgCache::PkgIterator package = cache->PkgBegin(); !package.end(); package++)
    {
        //std::cout << package.Name() << std::endl;
        cout << package.Name() << endl;
    }/**/
    return 0;
}
