# Main makefile for theta package
# Requires GNU make to execute. 
# $Date:: 2017-09-20 21:43:33 #$
#
# Copyright (C) 2006-2013 Davide Ori and theta contributors
# This file is part of theta.
#
# theta is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as
# published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
#
# theta is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty
# of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License along with ADDA. If not, see
# <http://www.gnu.org/licenses/>.


SHELL=/bin/sh #Shell da utilizzare per l'esecuzione dei comandi

CCPP=g++ #Compilatore da utilizzare

OBJECTS=theta.o #File oggetto
SRCS=theta.cpp #File sorgente

#target "theta" richiede $(OBJECTS) per compilare
theta: $(OBJECTS)
	$(CCPP) -o $@ $<
 
#target "theta.o" richiede $(SRCS) per creare i file oggetto
theta.o: $(SRCS)
	$(CC) -c -o $@ $<

#target "clean" pulisce i file oggetto e il binario nella directory corrente 
clean:
	rm -f theta theta.o

#target "clean" non è un file!
.PHONY: clean
