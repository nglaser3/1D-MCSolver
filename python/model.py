import lxml.etree
import os

class model:
    def __init__(self):
        self.geometry = None
        
        self.settings = None

        return 
    def set_geometry(self,geom):
        self.geometry = geom
        return
    def set_settings(self,settings):
        self.settings = settings
        return
    def write_to_xml(self,path):
        xs_data = ["","",""]
        for string in xs_data:
            self.geometry.
        return
    
class Geometry:
    def __init__(self):
        self.abs = None
        self.sct = None
        self.fis = None

        self.bounds = None
        
        return
    
    def set_xs(self, absorbtion, scatter, nufission):
        self.abs = absorbtion
        self.sct = scatter
        self.fis = nufission

        return 
    
    def set_bounds(self,boundaries):
        self.bounds=boundaries
        return
    
class Settings:
    def __init__(self):
        self.batches = None
        self.particles = None
        self.leg_order = None
        self.leg_bounds = None
        return

    def set_LegendreTally(self,order,bounds):
        self.leg_bounds = bounds
        self.leg_order = order
        return
    
    
