(function(a){a(document).ready(function(){a("a[data-cp-link-id]").click(function(b){b.preventDefault();var c=b.currentTarget,d=a(c).data("cp-link-id"),e=a("div[data-cp-popup-id="+d+"]");e.css({top:a(c).position().top-10,left:a(c).position().left,position:"absolute"}),e.show()}),a("div[data-cp-popup-id]").mouseleave(function(b){a(b.currentTarget).hide()})})})(jQuery)