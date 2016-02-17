$(".togglefunction").click(function() {
	var link = $(this);
	if (link.text() == 'less'){
	    $(".extracategories").hide("fast");
		link.text('more');
		link.removeClass('caret_up');
		link.addClass('caret_dn');
  }else{
    $(".extracategories").show("fast");
		link.text('less');
		link.removeClass('caret_dn');
		link.addClass('caret_up');
  }
});