
# PlanAhead Launch Script for Post PAR Floorplanning, created by Project Navigator

create_project -name MIPSMulticiclo -dir "C:/hlocal/pr6/MIPSMulticiclo/planAhead_run_1" -part xc3s1000ft256-5
set srcset [get_property srcset [current_run -impl]]
set_property design_mode GateLvl $srcset
set_property edif_top_file "C:/hlocal/pr6/MIPSMulticiclo/MIPSMulticiclo.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/hlocal/pr6/MIPSMulticiclo} {ipcore_dir} }
add_files [list {ipcore_dir/mem32x512.ncf}] -fileset [get_property constrset [current_run]]
set_property target_constrs_file "C:/hlocal/pr6/MIPSMulticiclo/hdl/pines.ucf" [current_fileset -constrset]
add_files [list {C:/hlocal/pr6/MIPSMulticiclo/hdl/pines.ucf}] -fileset [get_property constrset [current_run]]
link_design
read_xdl -file "C:/hlocal/pr6/MIPSMulticiclo/MIPSMulticiclo.ncd"
if {[catch {read_twx -name results_1 -file "C:/hlocal/pr6/MIPSMulticiclo/MIPSMulticiclo.twx"} eInfo]} {
   puts "WARNING: there was a problem importing \"C:/hlocal/pr6/MIPSMulticiclo/MIPSMulticiclo.twx\": $eInfo"
}
