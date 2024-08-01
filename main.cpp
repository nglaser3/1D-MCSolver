#include "src/Cell.C"
#include "src/Geometry.C"
#include "src/Particle.C"
#include "src/Batch.C"
#include "src/LegendreTally.C"

#include <pugixml.hpp>


#include <iostream>

int main()
{
    /*
    Cell* c1 = new Cell(0.0, 50.0, 0.12,0.05,0.15);
    Cell* c2 = new Cell(50.0, 100.0, 0.1,0.05,.12);
    std::vector<Cell*> cell_vector{c1,c2};
    Geometry geometry(cell_vector);
    std::vector<double> f{0.15,0.12};
    LegendreTally tally(10,0.0,100.0,geometry,f);
    Batch b(RandomVec(42, 0.0, 100.0), 42, geometry);
    tally.expandBatch(b.getFissionSites());
    tally.FinalizeFlux(1,200);
    std::cout<<b.getBatchKeff()<<std::endl;
    */
    pugi::xml_document file;
    pugi::xml_parse_result result = file.load_file("model.xml");

}