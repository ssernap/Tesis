$( document ).ready(function() {
    $("a[data-target='#recentposttab']").click(function(){
		$("a[data-target='#recentposttab']").removeClass( "inactivetab" ).addClass( "activetab" );
		$("a[data-target='#archivetab']").removeClass( "activetab" ).addClass( "inactivetab" );
	});
	$("a[data-target='#archivetab']").click(function(){
		$("a[data-target='#archivetab']").removeClass( "inactivetab" ).addClass( "activetab" );
		$("a[data-target='#recentposttab']").removeClass( "activetab" ).addClass( "inactivetab" );
	});
	$(".col-md-3.hidden-xs.hidden-sm.left-panel > nav > .widget.widget_mw_recentspost > #myTab > li > h4 > .recentpost-tab").click(function(){
		$(".col-md-3.hidden-xs.hidden-sm.left-panel > nav > .widget.widget_mw_recentspost > div > #recentposttab").removeClass( "active" ).addClass("active");
		$(".col-md-3.hidden-xs.hidden-sm.left-panel > nav > .widget.widget_mw_recentspost > div > #archivetab").removeClass( "active" );
	});
	$(".col-md-3.hidden-xs.hidden-sm.left-panel > nav > .widget.widget_mw_recentspost > #myTab > li > h4 > .tab-archive").click(function(){
		$(".col-md-3.hidden-xs.hidden-sm.left-panel > nav > .widget.widget_mw_recentspost > div > #recentposttab").removeClass( "active" );
		$(".col-md-3.hidden-xs.hidden-sm.left-panel > nav > .widget.widget_mw_recentspost > div > #archivetab").removeClass( "active" ).addClass("active");
	});
})