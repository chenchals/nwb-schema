**Source Specification:** see :numref:`nwb-type-namespace-src` 
 
.. _nwb-type-namespace-src:

Namespace: NWB core
-------------------

**Description:** see :numref:`nwb-type-namespace-doc`

**YAML Specification:**

.. code-block:: yaml
    :linenos:

    author:
    - Keith Godfrey
    - Jeff Teeters
    - Oliver Ruebel
    - Andrew Tritt
    contact:
    - keithg@alleninstitute.org
    - jteeters@berkeley.edu
    - oruebel@lbl.gov
    - ajtritt@lbl.gov
    doc: NWB namespace
    full_name: NWB core
    name: core
    schema:
    - source: nwb.base.yaml
    - source: nwb.epoch.yaml
    - source: nwb.image.yaml
    - source: nwb.file.yaml
    - source: nwb.misc.yaml
    - source: nwb.behavior.yaml
    - source: nwb.ecephys.yaml
    - source: nwb.icephys.yaml
    - source: nwb.ogen.yaml
    - source: nwb.ophys.yaml
    - source: nwb.retinotopy.yaml
    version: 1.2.0


