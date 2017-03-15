CFLAGS = -Iinclude -std=c++11 -g

SRC = air_habitat.o animals.o anseriformes.o artiodactyls.o beluga.o big_horn_sheep.o \
	cage.o carnivora.o cassowary.o casuariformes.o cell.o cetacea.o chameleon.o \
	cheetah.o cockatoo.o deer.o dolphin.o driver.o duck.o facility.o giraffe.o \
	gorilla.o great_white_shark.o habitat.o indices.o land_habitat.o lemur.o lion.o \
	meerkat.o monkey.o orca.o owl.o park.o parrots.o primates.o psittaciformes.o python.o \
	renderable.o restaurant.o road.o selacimorpha.o squamata.o strigiformes.o swan.o tarsier.o \
	water_habitat.o wolf.o zoo.o

INCLUDES = air_habitat.h animals.h anseriformes.h artiodactyls.h beluga.h big_horn_sheep.h \
	cage.h carnivora.h cassowary.h casuariformes.h cell.h cetacea.h chameleon.h \
	cheetah.h cockatoo.h deer.h dolphin.h driver.h duck.h facility.h giraffe.h \
	gorilla.h great_white_shark.h habitat.h indices.h land_habitat.h lemur.h lion.h \
	meerkat.h monkey.h orca.h owl.h park.h parrots.h primates.h psittaciformes.h python.h \
	renderable.h restaurant.h road.h selacimorpha.h squamata.h strigiformes.h swan.h tarsier.h \
	water_habitat.h wolf.h zoo.h

%.o: %.cpp $(INCLUDES)
	g++ -c -o $@ $< $(CFLAGS)

build: $(SRC)
	 g++ -c mdriver.cpp -o mdriver.o $(CFLAGS)
	 g++ $(SRC) mdriver.o -o mdriver $(CFLAGS)
	 chmod +x mdriver